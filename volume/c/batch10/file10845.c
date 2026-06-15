// fichero 10845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10845;

Registro10845 crear_registro10845(int id) {
    Registro10845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
