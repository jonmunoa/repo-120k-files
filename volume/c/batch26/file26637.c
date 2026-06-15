// fichero 26637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26637;

Registro26637 crear_registro26637(int id) {
    Registro26637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
