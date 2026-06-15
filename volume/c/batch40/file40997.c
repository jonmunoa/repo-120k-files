// fichero 40997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40997;

Registro40997 crear_registro40997(int id) {
    Registro40997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
