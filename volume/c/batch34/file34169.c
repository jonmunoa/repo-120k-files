// fichero 34169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34169;

Registro34169 crear_registro34169(int id) {
    Registro34169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
