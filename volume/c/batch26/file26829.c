// fichero 26829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26829;

Registro26829 crear_registro26829(int id) {
    Registro26829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
