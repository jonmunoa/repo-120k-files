// fichero 26545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26545;

Registro26545 crear_registro26545(int id) {
    Registro26545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
