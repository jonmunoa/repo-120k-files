// fichero 11153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11153;

Registro11153 crear_registro11153(int id) {
    Registro11153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
