// fichero 34093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34093;

Registro34093 crear_registro34093(int id) {
    Registro34093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
