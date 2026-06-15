// fichero 34857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34857;

Registro34857 crear_registro34857(int id) {
    Registro34857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
