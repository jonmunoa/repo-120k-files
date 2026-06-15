// fichero 40669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40669;

Registro40669 crear_registro40669(int id) {
    Registro40669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
