// fichero 44557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44557;

Registro44557 crear_registro44557(int id) {
    Registro44557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
