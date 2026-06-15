// fichero 10433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10433;

Registro10433 crear_registro10433(int id) {
    Registro10433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
