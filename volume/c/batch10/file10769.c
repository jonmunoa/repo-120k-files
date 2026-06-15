// fichero 10769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10769;

Registro10769 crear_registro10769(int id) {
    Registro10769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
