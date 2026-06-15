// fichero 9989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9989;

Registro9989 crear_registro9989(int id) {
    Registro9989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
