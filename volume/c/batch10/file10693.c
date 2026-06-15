// fichero 10693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10693;

Registro10693 crear_registro10693(int id) {
    Registro10693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
