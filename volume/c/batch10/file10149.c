// fichero 10149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10149;

Registro10149 crear_registro10149(int id) {
    Registro10149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
