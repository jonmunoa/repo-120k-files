// fichero 26785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26785;

Registro26785 crear_registro26785(int id) {
    Registro26785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
