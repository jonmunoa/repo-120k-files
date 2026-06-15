// fichero 9029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9029;

Registro9029 crear_registro9029(int id) {
    Registro9029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
