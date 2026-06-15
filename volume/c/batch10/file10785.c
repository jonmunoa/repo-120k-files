// fichero 10785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10785;

Registro10785 crear_registro10785(int id) {
    Registro10785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
