// fichero 10749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10749;

Registro10749 crear_registro10749(int id) {
    Registro10749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
