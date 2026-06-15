// fichero 44429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44429;

Registro44429 crear_registro44429(int id) {
    Registro44429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
