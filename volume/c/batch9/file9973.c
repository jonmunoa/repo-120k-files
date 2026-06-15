// fichero 9973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9973;

Registro9973 crear_registro9973(int id) {
    Registro9973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
