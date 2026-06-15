// fichero 26197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26197;

Registro26197 crear_registro26197(int id) {
    Registro26197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
