// fichero 10809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10809;

Registro10809 crear_registro10809(int id) {
    Registro10809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
