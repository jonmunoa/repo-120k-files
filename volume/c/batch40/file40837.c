// fichero 40837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40837;

Registro40837 crear_registro40837(int id) {
    Registro40837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
