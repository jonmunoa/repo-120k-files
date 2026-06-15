// fichero 9869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9869;

Registro9869 crear_registro9869(int id) {
    Registro9869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
