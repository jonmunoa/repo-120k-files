// fichero 8365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8365;

Registro8365 crear_registro8365(int id) {
    Registro8365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
