// fichero 19669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19669;

Registro19669 crear_registro19669(int id) {
    Registro19669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
