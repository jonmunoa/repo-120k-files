// fichero 38445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38445;

Registro38445 crear_registro38445(int id) {
    Registro38445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
