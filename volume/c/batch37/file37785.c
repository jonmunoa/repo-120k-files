// fichero 37785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37785;

Registro37785 crear_registro37785(int id) {
    Registro37785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
