// fichero 6837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6837;

Registro6837 crear_registro6837(int id) {
    Registro6837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
