// fichero 40285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40285;

Registro40285 crear_registro40285(int id) {
    Registro40285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
