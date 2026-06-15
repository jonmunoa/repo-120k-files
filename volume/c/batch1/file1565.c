// fichero 1565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1565;

Registro1565 crear_registro1565(int id) {
    Registro1565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
