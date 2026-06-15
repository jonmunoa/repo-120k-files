// fichero 6445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6445;

Registro6445 crear_registro6445(int id) {
    Registro6445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
