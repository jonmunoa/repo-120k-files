// fichero 40861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40861;

Registro40861 crear_registro40861(int id) {
    Registro40861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
