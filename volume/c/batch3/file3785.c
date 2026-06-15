// fichero 3785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3785;

Registro3785 crear_registro3785(int id) {
    Registro3785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
