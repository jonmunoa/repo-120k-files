// fichero 34669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34669;

Registro34669 crear_registro34669(int id) {
    Registro34669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
