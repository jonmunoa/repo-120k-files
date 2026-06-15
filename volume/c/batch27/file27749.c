// fichero 27749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27749;

Registro27749 crear_registro27749(int id) {
    Registro27749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
