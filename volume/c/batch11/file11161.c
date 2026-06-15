// fichero 11161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11161;

Registro11161 crear_registro11161(int id) {
    Registro11161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
