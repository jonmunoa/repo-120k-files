// fichero 9545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9545;

Registro9545 crear_registro9545(int id) {
    Registro9545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
