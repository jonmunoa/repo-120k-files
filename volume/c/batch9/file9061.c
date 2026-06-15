// fichero 9061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9061;

Registro9061 crear_registro9061(int id) {
    Registro9061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
