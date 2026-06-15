// fichero 9197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9197;

Registro9197 crear_registro9197(int id) {
    Registro9197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
