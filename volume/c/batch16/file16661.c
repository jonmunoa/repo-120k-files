// fichero 16661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16661;

Registro16661 crear_registro16661(int id) {
    Registro16661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
