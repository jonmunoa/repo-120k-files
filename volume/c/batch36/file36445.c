// fichero 36445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36445;

Registro36445 crear_registro36445(int id) {
    Registro36445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
