// fichero 40749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40749;

Registro40749 crear_registro40749(int id) {
    Registro40749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
