// fichero 8785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8785;

Registro8785 crear_registro8785(int id) {
    Registro8785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
