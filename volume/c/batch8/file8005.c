// fichero 8005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8005;

Registro8005 crear_registro8005(int id) {
    Registro8005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
