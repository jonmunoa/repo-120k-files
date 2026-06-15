// fichero 20445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20445;

Registro20445 crear_registro20445(int id) {
    Registro20445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
