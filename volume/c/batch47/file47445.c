// fichero 47445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47445;

Registro47445 crear_registro47445(int id) {
    Registro47445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
