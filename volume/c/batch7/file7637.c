// fichero 7637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7637;

Registro7637 crear_registro7637(int id) {
    Registro7637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
