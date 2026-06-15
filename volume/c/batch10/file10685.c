// fichero 10685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10685;

Registro10685 crear_registro10685(int id) {
    Registro10685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
