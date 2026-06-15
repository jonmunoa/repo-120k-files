// fichero 35181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35181;

Registro35181 crear_registro35181(int id) {
    Registro35181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
