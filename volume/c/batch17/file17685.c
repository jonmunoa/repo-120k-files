// fichero 17685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17685;

Registro17685 crear_registro17685(int id) {
    Registro17685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
