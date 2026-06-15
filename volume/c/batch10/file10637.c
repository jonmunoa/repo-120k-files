// fichero 10637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10637;

Registro10637 crear_registro10637(int id) {
    Registro10637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
