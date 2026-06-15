// fichero 10913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10913;

Registro10913 crear_registro10913(int id) {
    Registro10913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
