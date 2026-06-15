// fichero 40065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40065;

Registro40065 crear_registro40065(int id) {
    Registro40065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
